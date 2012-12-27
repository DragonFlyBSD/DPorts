# New ports collection makefile for:	2ping
# Date created:		2010-11-23
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net-mgmt/2ping/Makefile,v 1.4 2012/12/16 06:16:58 svnexp Exp $
#

PORTNAME=	2ping
PORTVERSION=	1.1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	http://www.finnie.org/software/2ping/

MAINTAINER=	gslin@gslin.org
COMMENT=	A bi-directional ping utility

RUN_DEPENDS=	p5-Digest-CRC>=0:${PORTSDIR}/security/p5-Digest-CRC \
		p5-Digest-MD5>=0:${PORTSDIR}/security/p5-Digest-MD5 \
		p5-Digest-SHA>=0:${PORTSDIR}/security/p5-Digest-SHA \
		p5-IO-Socket-INET6>=0:${PORTSDIR}/net/p5-IO-Socket-INET6

USE_PERL5_RUN=	yes

MAN8=		2ping.8 2ping6.8

.include <bsd.port.mk>
