#ifndef SPLITTHRESHOLDFIELD_H
#define SPLITTHRESHOLDFIELD_H

#include <QWidget>
#include <QSpinBox>

class SplitThresholdField : public QSpinBox
{
    Q_OBJECT
public:
    SplitThresholdField(QWidget* parent = 0);
};

#endif // SPLITTHRESHOLDFIELD_H