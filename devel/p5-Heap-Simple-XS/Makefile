# Created by: Aaron Dalton <aaron@daltons.ca>
# $FreeBSD: devel/p5-Heap-Simple-XS/Makefile 331958 2013-10-29 15:08:11Z vanilla $

PORTNAME=	Heap-Simple-XS
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An XS implementation of the Heap::Simple interface

BUILD_DEPENDS=	p5-Heap-Simple>=0:${PORTSDIR}/devel/p5-Heap-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS+=-n

.include <bsd.port.mk>
