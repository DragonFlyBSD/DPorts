# DragonFly wallpapers made by John Marino from "Free for commercial use"
# stock (CC2 license, http://highresolution.photography)

PORTNAME=	dragonfly-wallpapers
PORTVERSION=	1.0
CATEGORIES=	x11-themes kde xfce
MASTER_SITES=	http://leaf.dragonflybsd.org/~marino/dports-src/

MAINTAINER=	draco@marino.st
COMMENT=	DragonFly wallpapers for KDE, XFCE4, and other desktops

USES=		tar:xz
NO_BUILD=	yes
PLIST_SUB=	WP=share/wallpapers BK=share/backgrounds/dragonfly
XFCELOC=	${STAGEDIR}${PREFIX}/share/backgrounds/dragonfly
THEMES=		DF_Antelope_Canyon DF_Blue_Glass DF_Red_Roof DF_Snails \
		DF_Snowflake DF_Sunset_Tree
DIMS=		1024x768 1280x1024 1366x768 1440x900 1600x1200 1920x1080 \
		1920x1200

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/apps/plasma-desktop/init \
		${STAGEDIR}${PREFIX}/share/wallpapers \
		${XFCELOC}
	${INSTALL_DATA} ${WRKSRC}/kde-init/06-dragonflyWallpaper.js \
		${STAGEDIR}${PREFIX}/share/apps/plasma-desktop/init
	(cd ${WRKSRC} && ${COPYTREE_SHARE} "DF_*" \
		${STAGEDIR}${PREFIX}/share/wallpapers)
.for theme in ${THEMES}
. for dim in ${DIMS}
	(cd ${XFCELOC} && ${LN} -s \
		../../wallpapers/${theme}/contents/images/${dim}.jpg \
		${theme:S/DF_//}_${dim}.jpg)
. endfor
.endfor

.include <bsd.port.mk>
