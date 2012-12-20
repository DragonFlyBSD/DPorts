# New ports collection makefile for:	p5-DateTime-TimeZone-LMT
# Date created:	   8 Jan 2004
# Whom:		   Mathieu Arnold <mat@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-DateTime-TimeZone-LMT/Makefile,v 1.6 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	DateTime-TimeZone-LMT
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Local Mean Time time zone for DateTime

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::TimeZone::LMT.3

.include <bsd.port.mk>
