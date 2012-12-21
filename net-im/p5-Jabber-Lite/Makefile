# New ports collection makefile for:	p5-Jabber-Lite
# Date created:		2007-09-03
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net-im/p5-Jabber-Lite/Makefile,v 1.4 2012/11/17 06:00:28 svnexp Exp $
#

PORTNAME=	Jabber-Lite
PORTVERSION=	0.8
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Jabber
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Standalone library for communicating with Jabber servers

RUN_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-Authen-SASL>=0:${PORTSDIR}/security/p5-Authen-SASL \
		p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL

PERL_CONFIGURE=	yes

MAN3=		Jabber::Lite.3

.include <bsd.port.mk>
