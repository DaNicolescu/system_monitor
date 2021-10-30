#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>

class GeneralTab : public QWidget
{
    Q_OBJECT

    QGridLayout *systemGridLayout;
    QGroupBox *systemGroupBox;

public:
    explicit GeneralTab(QWidget *parent = nullptr);
    ~GeneralTab();
};