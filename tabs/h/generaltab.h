#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>

class GeneralTab : public QWidget
{
    Q_OBJECT

    QGridLayout *mainGridLayout;

    QGroupBox *systemGroupBox;
    QGridLayout *systemGridLayout;

    QGroupBox *diskGroupBox;
    QGridLayout *diskGridLayout;

    QGroupBox *memoryGroupBox;
    QGridLayout *memoryGridLayout;

public:
    explicit GeneralTab(QWidget *parent = nullptr);
    ~GeneralTab();
};