# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/p5-autobox-Core/Makefile 323264 2013-07-19 01:29:54Z wen $

PORTNAME=	autobox-Core
PORTVERSION=	1.27
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Core functions exposed as methods in primitive types

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-autobox>=2.71:${PORTSDIR}/devel/p5-autobox
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		autobox::Core.3

.include <bsd.port.mk>
