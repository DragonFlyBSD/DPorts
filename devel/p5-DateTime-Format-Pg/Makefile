# New ports collection makefile for:	p5-DateTime-Format-Pg
# Date created:	   2 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-Pg/Makefile,v 1.22 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-Pg
PORTVERSION=	0.16.007
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format PostgreSQL dates and times

BUILD_DEPENDS=	p5-DateTime>=0.10:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Format-Builder>=0.72:${PORTSDIR}/devel/p5-DateTime-Format-Builder \
		p5-DateTime-TimeZone>=0.05:${PORTSDIR}/devel/p5-DateTime-TimeZone
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Format::Pg.3

.include <bsd.port.mk>
