# Created by: shalunov
# $FreeBSD: sysutils/stmpclean/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	stmpclean
PORTVERSION=	0.3
CATEGORIES=	sysutils security
MASTER_SITES=	http://shlang.com/stmpclean/

MAINTAINER=	shalunov@shlang.com
COMMENT=	Remove old files from temporary directories

MAN8=		stmpclean.8
MANCOMPRESSED=	no
PLIST_FILES=	sbin/stmpclean

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s/-O6//g" ${WRKSRC}/Makefile

.include <bsd.port.mk>
