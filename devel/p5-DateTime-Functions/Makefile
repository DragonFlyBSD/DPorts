# New ports collection makefile for:	p5-DateTime-Functions
# Date created:	   8 Jan 2004
# Whom:		   Mathieu Arnold <mat@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-DateTime-Functions/Makefile,v 1.7 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Functions
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Procedural interface to DateTime functions

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Functions.3

.include <bsd.port.mk>
