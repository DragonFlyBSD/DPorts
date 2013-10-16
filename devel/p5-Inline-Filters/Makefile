# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Inline-Filters/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Inline-Filters
PORTVERSION=	0.12
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Common source code filters for Inline Modules

BUILD_DEPENDS=	p5-Inline>=0:${PORTSDIR}/devel/p5-Inline
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Inline::Filters.3

NO_STAGE=	yes
.include <bsd.port.mk>
