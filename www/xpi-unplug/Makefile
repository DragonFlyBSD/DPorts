# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: www/xpi-unplug/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	unplug
DISTVERSION=	2.054
DISTVERSIONSUFFIX=	-fx+sm
CATEGORIES=	www

MAINTAINER=	gecko@FreeBSD.org
COMMENT=	Converts embedded media to html links

XPI_ID=		unplug@compunach
XPI_NUM=	2254

NO_STAGE=	yes
xpi-post-extract:
	${FIND} ${WRKSRC} -type d -name CVS|${XARGS} ${RM} -rf

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
