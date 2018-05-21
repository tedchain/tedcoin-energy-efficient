#include "splitthresholdfield.h"
#include "main.h"

SplitThresholdField::SplitThresholdField(QWidget* parent) : QSpinBox(parent){
  setMaximum(MAX_SPLIT_AMOUNT/1000000);
}
