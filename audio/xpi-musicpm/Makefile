# Created by: Dennis Herrmann <adox@mcx2.org>
# $FreeBSD: audio/xpi-musicpm/Makefile 341201 2014-01-26 15:08:31Z miwi $

PORTNAME=	musicpm
PORTVERSION=	1.4.4
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DISTNAME=	mpm_${PORTVERSION}

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Music Player Minion

XPI_ID=		Music_Player_Minion@code.google.com
XPI_FILES=	chrome/minion.jar chrome.manifest install.js install.rdf
XPI_DIRS=	chrome

.include "${.CURDIR}/../../www/xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
