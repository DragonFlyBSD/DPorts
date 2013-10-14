# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD: devel/p5-Class-Container/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-Container
PORTVERSION=	0.12
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dsh@vlink.ru
COMMENT=	Glues object frameworks together transparently

BUILD_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Container.3

NO_STAGE=	yes
.include <bsd.port.mk>
