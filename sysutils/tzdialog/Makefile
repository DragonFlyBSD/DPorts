# Created by: Devin Teske <dteske@vicor.com>
# $FreeBSD: sysutils/tzdialog/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	tzdialog
PORTVERSION=	1.2
CATEGORIES=	sysutils
MASTER_SITES=	http://druidbsd.sourceforge.net/download/

MAINTAINER=	dteske@vicor.com
COMMENT=	Set the local timezone using dialog(1) or Xdialog(1)

NO_BUILD=	yes

PLIST_FILES=	sbin/${PORTNAME}
MAN8=		${PORTNAME}.8

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/sbin/
	${INSTALL_MAN} ${WRKSRC}/${MAN8} ${MANPREFIX}/man/man8/

.include <bsd.port.mk>
