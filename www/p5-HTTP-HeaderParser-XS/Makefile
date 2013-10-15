# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-HTTP-HeaderParser-XS/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTTP-HeaderParser-XS
PORTVERSION=	0.20
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XS extension for processing HTTP headers

USES=		perl5
USE_PERL5=	configure

MAKE_ARGS+=	CC=${CXX} LD=${CXX}

MAN3=		HTTP::HeaderParser::XS.3

NO_STAGE=	yes
.include <bsd.port.mk>
