# zrj
PORTNAME=	x11-remote
PORTVERSION=	1.0
CATEGORIES=	x11
MASTER_SITES=	# none
DISTFILES=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	zrj@efnet.irc
COMMENT=	X11 minimal set for remote ssh usage

LICENSE=	MIT

MINXFONTS=	font-alias>0:x11-fonts/font-alias \
		fc-cache:x11-fonts/fontconfig \
		xorg-fonts-type1>0:x11-fonts/xorg-fonts-type1 \
		font-bh-ttf>0:x11-fonts/font-bh-ttf \
		font-misc-ethiopic>0:x11-fonts/font-misc-ethiopic \

RUN_DEPENDS=	${MINXFONTS} xauth:x11/xauth xrandr:x11/xrandr xterm:x11/xterm

NO_BUILD=	yes
NO_INSTALL=	yes
NO_MTREE=	yes

.include <bsd.port.mk>
