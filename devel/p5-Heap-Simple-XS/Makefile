# New ports collection makefile for:	p5-Heap-Simple-XS
# Date created:				11 November 2004
# Whom:					Aaron Dalton <aaron@daltons.ca>
#
# $FreeBSD: ports/devel/p5-Heap-Simple-XS/Makefile,v 1.10 2012/11/17 05:56:18 svnexp Exp $
#

PORTNAME=	Heap-Simple-XS
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An XS implementation of the Heap::Simple interface

BUILD_DEPENDS=	p5-Heap-Simple>=0:${PORTSDIR}/devel/p5-Heap-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CONFIGURE_ARGS+=-n

MAN3=		Heap::Simple::XS.3

.include <bsd.port.mk>
