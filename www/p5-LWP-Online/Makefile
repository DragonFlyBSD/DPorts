# Created by: milki <milki@rescomp.berkeley.edu>
# $FreeBSD: www/p5-LWP-Online/Makefile 338769 2014-01-05 13:31:10Z az $

PORTNAME=	LWP-Online
PORTVERSION=	1.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ADAMK
PKGNAMEPREFIX=	p5-

MAINTAINER=	milki@rescomp.berkeley.edu
COMMENT=	Checks if process has access to the web

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS+=	p5-libwww>=5.805:${PORTSDIR}/www/p5-libwww \
		p5-URI>=1.35:${PORTSDIR}/net/p5-URI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
