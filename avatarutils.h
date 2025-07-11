#ifndef AVATARUTILS_H
#define AVATARUTILS_H

#include <QPixmap>
#include <QPainter>
#include <QPainterPath>

// ✅ Inline helper function
inline QPixmap getCircularPixmap(const QString &path, int size)
{
    QPixmap source(path);
    QPixmap target(size, size);
    target.fill(Qt::transparent);

    QPainter painter(&target);
    painter.setRenderHint(QPainter::Antialiasing);
    QPainterPath pathClip;
    pathClip.addEllipse(0, 0, size, size);
    painter.setClipPath(pathClip);
    painter.drawPixmap(0, 0, source.scaled(size, size, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    return target;
}

#endif // AVATARUTILS_H
