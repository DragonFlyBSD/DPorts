# New ports collection makefile for:	p5-Net-OpenSSH-Parallel
# Date created:		2012-05-05
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Net-OpenSSH-Parallel/Makefile,v 1.2 2012/11/17 06:00:11 svnexp Exp $
#

PORTNAME=	Net-OpenSSH-Parallel
PORTVERSION=	0.12
CATEGORIES=	net security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Run SSH jobs in parallel

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-OpenSSH>=0.39:${PORTSDIR}/net/p5-Net-OpenSSH
RUN_DEPENDS=	p5-Net-OpenSSH>=0.39:${PORTSDIR}/net/p5-Net-OpenSSH

PERL_CONFIGURE=	yes

MAN3=		Net::OpenSSH::Parallel.3 \
		Net::OpenSSH::Parallel::Constants.3

.include <bsd.port.mk>
