# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Class-Default/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-Default
PORTVERSION=	1.51
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Static calls apply to a default instantiation

BUILD_DEPENDS=	p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Default.3

NO_STAGE=	yes
.include <bsd.port.mk>
