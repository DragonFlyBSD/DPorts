# New ports collection makefile for:	POE-Component-Cron
# Date created:	   December 21 2010
# Whom:		   mat
#
# $FreeBSD: ports/devel/p5-POE-Component-Cron/Makefile,v 1.3 2012/11/17 05:56:24 svnexp Exp $
#

PORTNAME=	POE-Component-Cron
PORTVERSION=	0.021
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Schedule POE Events using a cron spec

BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple \
		p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-Schedule>=0:${PORTSDIR}/devel/p5-POE-Component-Schedule \
		p5-DateTime-Event-Random>=0:${PORTSDIR}/devel/p5-DateTime-Event-Random \
		p5-DateTime-Event-Cron>=0:${PORTSDIR}/devel/p5-DateTime-Event-Cron
RUN_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-Schedule>=0:${PORTSDIR}/devel/p5-POE-Component-Schedule \
		p5-DateTime-Event-Random>=0:${PORTSDIR}/devel/p5-DateTime-Event-Random \
		p5-DateTime-Event-Cron>=0:${PORTSDIR}/devel/p5-DateTime-Event-Cron

PERL_CONFIGURE=	yes

MAN3=		POE::Component::Cron.3

.include <bsd.port.mk>
