# Created by: shalunov
# $FreeBSD: sysutils/stmpclean/Makefile 340722 2014-01-22 17:00:46Z mat $

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
