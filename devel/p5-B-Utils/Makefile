# New ports collection makefile for:	p5-B-Utils
# Date created:				31 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-B-Utils/Makefile,v 1.21 2012/12/17 15:16:53 svnexp Exp $
#

PORTNAME=	B-Utils
PORTVERSION=	0.21
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JJORE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Helper functions for op tree manipulation

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.301:${PORTSDIR}/devel/p5-ExtUtils-Depends

PERL_CONFIGURE=	yes

MAN3=		B::Utils.3 B::Utils::OP.3

.include <bsd.port.mk>
