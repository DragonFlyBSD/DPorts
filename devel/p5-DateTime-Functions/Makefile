# Created by: Mathieu Arnold <mat@FreeBSD.org>
# $FreeBSD: devel/p5-DateTime-Functions/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	DateTime-Functions
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Procedural interface to DateTime functions

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		DateTime::Functions.3

NO_STAGE=	yes
.include <bsd.port.mk>
