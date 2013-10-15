# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: textproc/pure-csv/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	pure-csv
PORTVERSION=	1.5
CATEGORIES=	textproc

MAINTAINER=	lichray@gmail.com
COMMENT=	A CSV reading and writing module for the Pure language

USE_PURE=	yes
NO_PURE_EXAMPLES=	yes

PLIST_FILES=	lib/pure/csv.pure \
		lib/pure/csv.so

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
