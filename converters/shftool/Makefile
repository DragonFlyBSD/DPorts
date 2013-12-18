# Created by: Joachim Strombergson <watchman@ludd.ltu.se>
# $FreeBSD: converters/shftool/Makefile 336177 2013-12-11 15:15:48Z bapt $

PORTNAME=	shftool
PORTVERSION=	1.2.0
PORTREVISION=	2
CATEGORIES=	converters
MASTER_SITES=	http://www.df.lth.se/~triad/krad/shftool/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converter for the Standard Hex Format (SHF)

LIB_DEPENDS=	libexpat.so:${PORTSDIR}/textproc/expat2

GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -e 's,^LIBLOC_LIST=.*,LIBLOC_LIST=${LOCALBASE},' \
		${WRKSRC}/configure

.include <bsd.port.mk>
