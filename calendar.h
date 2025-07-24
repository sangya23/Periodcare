#ifndef CALENDAR_H
#define CALENDAR_H
#include <QCalendarWidget>
#include <QMap>
#include <QDate>
#include <QColor>
#include <QPainter>

class Calendar : public QCalendarWidget {
    Q_OBJECT

public:
    explicit Calendar(QWidget *parent = nullptr);

    void setDateColor(const QDate &date, const QColor &color);
    void clearCustomDates();

protected:
    void paintCell(QPainter *painter, const QRect &rect, QDate date) const override;

private:
    QMap<QDate, QColor> customDateColors;
};

#endif
