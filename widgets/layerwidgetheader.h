#ifndef LAYERWIDGETHEADER_H
#define LAYERWIDGETHEADER_H

#include <QWidget>

class QLabel;
class QSpinBox;

class LayerWidgetHeader : public QWidget
{
    Q_OBJECT
public:
    explicit LayerWidgetHeader(QWidget *parent = 0);
    
signals:
    
public slots:
protected:
    QLabel *opacity_label_;
    QSpinBox *opacity_spinBox_;
    
};

#endif // LAYERWIDGETHEADER_H
