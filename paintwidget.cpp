#include <QLayout>
#include "paintwidget.h"


// Constructor that builds the main the widget with no parent and adds the components to it in the appropriate layouts.
PaintWidget::PaintWidget(QWidget *parent)
    : QWidget(parent)
{
    // Creating buttons with shortcuts.
    this->rectangle = new QPushButton("&Rectangle");
    this->square = new QPushButton("&Square");
    this->circle = new QPushButton("&Circle");
    this->close = new QPushButton("C&lose");
    this->clear = new QPushButton("Cle&ar");
    this->save = new QPushButton("Sa&ve");

    // Creating the labels that will show that area of the drawn shape.
    this->showingAreaLabel = new QLabel("Area = ");
    this->showingArea = new QLineEdit;
    this->showingArea->setEnabled(false);
    QFont *areaFont = new QFont();
    areaFont->setBold(true);
    this->showingArea->setFont(*areaFont);

    // Creating the options to fill or to draw with effects.
    this->fillOption = new QCheckBox("&Filled");
    this->effectsOption = new QCheckBox("&Effects");

    // Creating the area where the components will be drawn.
    this->paper = new DrawingArea(this);

    // Creating the colors sliders and labels.
    this->redColorLabel = new QLabel("R");
    this->colorChangerRed = new QSlider(Qt::Horizontal);
    this->colorChangerRed->setRange(0, 255);
    this->colorChangerRed->setTickInterval(1);
    this->greenColorLabel = new QLabel("G");
    this->colorChangerGreen = new QSlider(Qt::Horizontal);
    this->colorChangerGreen->setRange(0, 255);
    this->colorChangerGreen->setTickInterval(1);
    this->blueColorLabel = new QLabel("B");
    this->colorChangerBlue = new QSlider(Qt::Horizontal);
    this->colorChangerBlue->setRange(0, 255);
    this->colorChangerBlue->setTickInterval(1);

    // Creating the area to show how the chosen color looks like.
    this->colorTest = new QLabel();

    // Setting the style of the components
    this->redColorLabel->setStyleSheet("* {  font-size: 20px; color: white;}");
    this->greenColorLabel->setStyleSheet("* {  font-size: 20px; color: white;}");
    this->blueColorLabel->setStyleSheet("* {  font-size: 20px; color: white;}");
    this->colorTest->setStyleSheet("* { background-color: black; }");
    this->square->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->circle->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->rectangle->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->close->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->clear->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->save->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->showingAreaLabel->setStyleSheet("* {  font-size: 20px; color: white;}");
    this->showingArea->setStyleSheet("* {  font-weight: bolder; font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->fillOption->setStyleSheet("* {  font-size: 20px; color: white;}");
    this->effectsOption->setStyleSheet("* {  font-size: 20px; color: white;}");
    this->setStyleSheet("* {background-color: rgb(76,76,76)}");

    // Resizing the main window.
    this->resize(1275, 1200);

    /* Creating layouts.
     The main layout is horizontal, it includes two layouts: the drawing area layout and the control layout,
     which are vertical.
     The control layout contains three layouts: buttons, options and calculating area, all are vertical.
     The options layout contains three layouts: three for three colors and one for the filled and effects options.
    */
    QHBoxLayout *mainLayout = new QHBoxLayout;
    QHBoxLayout *calculatingAreaLayout = new QHBoxLayout;
    QVBoxLayout *optionsLayout = new QVBoxLayout;
    QVBoxLayout *controlLayout = new QVBoxLayout;
    QVBoxLayout *buttonsLayout = new QVBoxLayout;
    QVBoxLayout *drawingAreaLayout = new QVBoxLayout;
    QHBoxLayout *redColorLayout = new QHBoxLayout;
    QHBoxLayout *greenColorLayout = new QHBoxLayout;
    QHBoxLayout *blueColorLayout = new QHBoxLayout;

    // Adding widgets to their layouts

    // Adding drawing area.
    drawingAreaLayout->addWidget(this->paper);

    // Adding buttons.
    buttonsLayout->addWidget(this->rectangle);
    buttonsLayout->addWidget(this->square);
    buttonsLayout->addWidget(this->circle);
    buttonsLayout->addWidget(this->save);
    buttonsLayout->addWidget(this->clear);
    buttonsLayout->addWidget(this->close);

    // Adding filled and effects options.
    optionsLayout->addWidget(this->fillOption);
    optionsLayout->addWidget(this->effectsOption);

    // Adding the colors layout.
    redColorLayout->addWidget(this->redColorLabel);
    redColorLayout->addWidget(this->colorChangerRed);
    greenColorLayout->addWidget(this->greenColorLabel);
    greenColorLayout->addWidget(this->colorChangerGreen);
    blueColorLayout->addWidget(this->blueColorLabel);
    blueColorLayout->addWidget(this->colorChangerBlue);
    optionsLayout->addLayout(redColorLayout);
    optionsLayout->addLayout(greenColorLayout);
    optionsLayout->addLayout(blueColorLayout);
    optionsLayout->addWidget(this->colorTest);

    // Adding the calculating area components.
    calculatingAreaLayout->addWidget(this->showingAreaLabel);
    calculatingAreaLayout->addWidget(this->showingArea);

    // Adding layouts,
    controlLayout->addLayout(buttonsLayout,3);
    controlLayout->addLayout(optionsLayout,1);
    controlLayout->addLayout(calculatingAreaLayout,1);

    mainLayout->addLayout(drawingAreaLayout, 4);
    mainLayout->addLayout(controlLayout,1);

    // Setting the main layout.
    this->setLayout(mainLayout);

    // Connecting signals with their corresponding signals.

    // Connecting the close button with the closing of the widget.
    connect(this->close, SIGNAL(clicked()), this, SLOT(close()));

    // Each buttong changes the type of the shape that will be drawn in the drawing area.
    connect(this->rectangle, SIGNAL(clicked()), this, SLOT(drawRectangle()));
    connect(this->square, SIGNAL(clicked()), this, SLOT(drawSquare()));
    connect(this->circle, SIGNAL(clicked()), this, SLOT(drawCircle()));

    // The clear button clears the drawing area, destroying the old pixmap and creating a new one.
    connect(this->clear, SIGNAL(clicked()), this->paper, SLOT(clearPixMap()));

    connect(this->save, SIGNAL(clicked()), this->paper, SLOT(savePixMap()));

    // The area tells the line edit where the area is shown about the area of the newly drawn shape.
    connect(this->paper, SIGNAL(updateArea(double)), this, SLOT(changeAreaValue(double)));

    // Check boxes notify their status to change the way the shapes are drawn.
    connect(this->fillOption, SIGNAL(stateChanged(int)), this, SLOT(drawFilled(int)));
    connect(this->effectsOption, SIGNAL(stateChanged(int)), this, SLOT(enableEffects(int)));

    // Color sliders change the grade of the color that will be used to draw the shape.
    connect(this->colorChangerRed, SIGNAL(valueChanged(int)), this, SLOT(changeRedColor(int)));
    connect(this->colorChangerGreen, SIGNAL(valueChanged(int)), this, SLOT(changeGreenColor(int)));
    connect(this->colorChangerBlue, SIGNAL(valueChanged(int)), this, SLOT(changeBlueColor(int)));
}

// Destructor
PaintWidget::~PaintWidget()
{

}

// Slot that is called when the Rectangle button is clicked to start drawing a rectangle.
void PaintWidget::drawRectangle()
{
    // Sets the type of the shape that will be drawn to "1" which means a rectangle.
    this->paper->setType(1);

    // Changes the look of the shapes buttons distinguishing the rectangle button.
    this->rectangle->setStyleSheet("* {  font-size: 20px; color: black; background-color: rgb(179,179,179) }");
    this->square->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->circle->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
}

// Slot that is called when the Square button is clicked to start drawing a square.
void PaintWidget::drawSquare()
{
    // Sets the type of the shape that will be drawn to "2" which means a square.
    this->paper->setType(2);

    // Changes the look of the shapes buttons distinguishing the square button.
    this->square->setStyleSheet("* {  font-size: 20px; color: black; background-color: rgb(179,179,179) }");
    this->circle->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->rectangle->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
}

// Slot that is called when the Circle button is clicked to start drawing a circle.
void PaintWidget::drawCircle()
{
    // Sets the type of the shape that will be drawn to "3" which means a circle.
    this->paper->setType(3);

    // Changes the look of the shapes buttons distinguishing the circle button.
    this->circle->setStyleSheet("* {  font-size: 20px; color: black; background-color: rgb(179,179,179) }");
    this->square->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
    this->rectangle->setStyleSheet("* {  font-size: 20px; color: white; background-color: rgb(120,120,120) }");
}

// Slot that updates the area shown with the given area that belongs to the last drawn shape.
void PaintWidget::changeAreaValue(double newArea)
{
    this->showingArea->setText( QString::number(newArea));
}

// Slot that determines whether the shape will be filled or not depending on the state of the check box.
void PaintWidget::drawFilled(int value)
{
    // If the box is checked.
    if(value == 2)
    {
        this->paper->setShapeFilled(true);

        // Uncheck the effects option.
        this->effectsOption->setChecked(false);
    }
    else this->paper->setShapeFilled(false);
}

// Slot that determines whether the effects will be drawn or not depending on the state of the check box.
void PaintWidget::enableEffects(int value)
{
    // If the box is checked.
    if(value == 2)
    {
        this->paper->setEffectsEnabled(true);

        // Uncheck the filled option.
        this->fillOption->setChecked(false);
    }
    else this->paper->setEffectsEnabled(false);
}

// Slot that changes the value of the red percentage of the color that will be used to draw the shape.
void PaintWidget::changeRedColor(int redValue)
{
    // Setting the value.
    this->paper->setRedColor(redValue);

    // Showing the effect of the change on the color testing label.
    this->colorTest->setStyleSheet("* { background-color: rgb(" + QString::number(redValue) + "," + QString::number(this->paper->getGreenColor()) + "," + QString::number(this->paper->getBlueColor()) + "); }");
}

// Slot that changes the value of the green percentage of the color that will be used to draw the shape.
void PaintWidget::changeGreenColor(int greenValue)
{
    // Setting the value.
    this->paper->setGreenColor(greenValue);

    // Showing the effect of the change on the color testing label.
    this->colorTest->setStyleSheet("* { background-color: rgb(" + QString::number(this->paper->getRedColor()) + "," + QString::number(greenValue) + "," + QString::number(this->paper->getBlueColor()) + "); }");
}// Setting the value.

// Slot that changes the value of the blue percentage of the color that will be used to draw the shape.
void PaintWidget::changeBlueColor(int blueValue)
{
    // Setting the value.
    this->paper->setBlueColor(blueValue);

    // Showing the effect of the change on the color testing label.
    this->colorTest->setStyleSheet("* { background-color: rgb(" + QString::number(this->paper->getRedColor()) + "," + QString::number(this->paper->getGreenColor()) + "," + QString::number(blueValue) + "); }");
}
