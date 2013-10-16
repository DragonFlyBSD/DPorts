# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: www/p5-WWW-Shorten-KUSO/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WWW-Shorten-KUSO
PORTVERSION=	0.3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Shorten URL using http://KUSO.CC/

BUILD_DEPENDS=	p5-WWW-Shorten>=0:${PORTSDIR}/www/p5-WWW-Shorten
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::Shorten::KUSO.3

NO_STAGE=	yes
.include <bsd.port.mk>
