# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net/p5-X500-DN/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	X500-DN
PORTVERSION=	0.29
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Handle X.500 DNs (Distinguished Names), parse, and format them

BUILD_DEPENDS=	p5-Parse-RecDescent>=0:${PORTSDIR}/devel/p5-Parse-RecDescent
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		X500::DN.3 X500::RDN.3

NO_STAGE=	yes
.include <bsd.port.mk>
