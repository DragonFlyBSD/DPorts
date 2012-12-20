# New ports collection makefile for:	p5-DateTime-TimeZone-Alias
# Date created:	   7 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-TimeZone-Alias/Makefile,v 1.12 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	DateTime-TimeZone-Alias
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create aliases for DateTime timezones

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime-TimeZone>=0:${PORTSDIR}/devel/p5-DateTime-TimeZone \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime

PERL_MODBUILD=	yes

MAN3=		DateTime::TimeZone::Alias.3

.include <bsd.port.mk>
