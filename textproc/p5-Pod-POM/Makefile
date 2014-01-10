# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-Pod-POM/Makefile 338500 2014-01-02 20:57:25Z sunpoet $

PORTNAME=	Pod-POM
PORTVERSION=	0.29
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POD Object Model

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
