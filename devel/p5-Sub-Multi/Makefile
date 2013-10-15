# Created by: ijliao
# $FreeBSD: devel/p5-Sub-Multi/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Sub-Multi
PORTVERSION=	0.003
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Data::Bind-based multi-sub dispatch

BUILD_DEPENDS=	p5-Class-Multimethods-Pure>=0.11:${PORTSDIR}/devel/p5-Class-Multimethods-Pure \
		p5-Data-Bind>=0.26:${PORTSDIR}/devel/p5-Data-Bind \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Sub::Multi.3

NO_STAGE=	yes
.include <bsd.port.mk>
