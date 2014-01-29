# Created by: Konstantinos Konstantinidis <kkonstan@daemon.gr>
# $FreeBSD: net/wmnetmon/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wmnetmon
PORTVERSION=	0.2p5
PORTREVISION=	2
CATEGORIES=	net windowmaker
MASTER_SITES=	http://www.linuks.mine.nu/dockapps/

MAINTAINER=	xride@FreeBSD.org
COMMENT=	A host availability monitor intended for the WindowMaker dock

USE_XORG=	xpm
GNU_CONFIGURE=	yes

BINMODE=	4755

PLIST_FILES=	bin/wmnetmon share/examples/wmnetmon/wmnetmonrc
PLIST_DIRS=	share/examples/wmnetmon

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmnetmon ${PREFIX}/bin
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/wmnetmonrc ${EXAMPLESDIR}

.include <bsd.port.mk>
