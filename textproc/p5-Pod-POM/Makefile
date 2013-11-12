# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-Pod-POM/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	Pod-POM
PORTVERSION=	0.28
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POD Object Model

BUILD_DEPENDS=	p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
