# New ports collection makefile for:	POE-Component-Schedule
# Date created:	   December 21 2010
# Whom:		   mat
#
# $FreeBSD: devel/p5-POE-Component-Schedule/Makefile 324168 2013-08-02 17:16:28Z mat $
#

PORTNAME=	POE-Component-Schedule
PORTVERSION=	0.95
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mat@FreeBSD.org
COMMENT=	Schedule POE Events using a cron spec

BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple \
		p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-DateTime-Set>=0:${PORTSDIR}/devel/p5-DateTime-Set
RUN_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-DateTime-Set>=0:${PORTSDIR}/devel/p5-DateTime-Set

USES=		perl5
USE_PERL5=	modbuild

MAN3=		POE::Component::Schedule.3

.include <bsd.port.mk>
