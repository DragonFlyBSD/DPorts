# New ports collection makefile for:	p5-IO-All-LWP
# Date created:		2009-04-21
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-IO-All-LWP/Makefile,v 1.3 2012/11/17 05:56:18 svnexp Exp $
#

PORTNAME=	IO-All-LWP
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	IO
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	IO::All interface to LWP

RUN_DEPENDS=	p5-IO-All>=0.30:${PORTSDIR}/devel/p5-IO-All \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

PERL_CONFIGURE=	yes

MAN3=		IO::All::FTP.3 \
		IO::All::HTTP.3 \
		IO::All::HTTPS.3 \
		IO::All::LWP.3

.include <bsd.port.mk>
