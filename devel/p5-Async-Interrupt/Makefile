# New ports collection makefile for:	p5-Async-Interrupt
# Date created:		2010-12-29
# Whom:			Mikhail T. <michael@fun-box.ru>
#
# $FreeBSD: ports/devel/p5-Async-Interrupt/Makefile,v 1.6 2012/11/17 05:56:05 svnexp Exp $
#

PORTNAME=	Async-Interrupt
PORTVERSION=	1.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Allow C/XS libraries to interrupt perl asynchronously

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense
RUN_DEPENDS=	p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense

PERL_CONFIGURE=	yes

MAN3=		Async::Interrupt.3

.include <bsd.port.mk>
