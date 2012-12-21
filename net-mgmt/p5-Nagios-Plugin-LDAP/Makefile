# New ports collection makefile for:	p5-Nagios-Plugin-LDAP
# Date created:		01 Mar 2011
# Whom:			Alexander Kriventsov <avk@vl.ru>
#
# $FreeBSD: ports/net-mgmt/p5-Nagios-Plugin-LDAP/Makefile,v 1.4 2012/11/17 06:00:35 svnexp Exp $
#

PORTNAME=	Nagios-Plugin-LDAP
PORTVERSION=	0.04
CATEGORIES=	net-mgmt
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	avk@vl.ru
COMMENT=	Nagios plugin to observe LDAP

PERL_CONFIGURE=	yes

BUILD_DEPENDS=	p5-perl-ldap>=0:${PORTSDIR}/net/p5-perl-ldap \
		p5-Nagios-Plugin>=0:${PORTSDIR}/net-mgmt/p5-Nagios-Plugin \
		p5-Time-HiRes>=0:${PORTSDIR}/devel/p5-Time-HiRes \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime

RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=		Nagios::Plugin::LDAP.3

post-patch:
	@${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>
