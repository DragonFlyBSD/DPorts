# Created by: nik
# $FreeBSD: textproc/scr2txt/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	scr2txt
PORTVERSION=	1.2
CATEGORIES=	textproc

MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR= nik
NO_WRKSUBDIR=	yes

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts the output of "vidcontrol -p" to text

MAN1=		scr2txt.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/scr2txt

NO_STAGE=	yes
do-install:
	@cd ${WRKSRC}; ${MAKE} BINDIR=${LOCALBASE}/bin SHAREDIR=${LOCALBASE} install

.include <bsd.port.mk>
