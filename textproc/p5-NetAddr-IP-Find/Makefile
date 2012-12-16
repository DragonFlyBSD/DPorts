# New ports collection makefile for:	p5-NetAddr-IP-Find
# Date created:				May 14th 2002
# Whom:					Alex Kapranoff <kappa@freebsd.org.ua>
#
# $FreeBSD: ports/textproc/p5-NetAddr-IP-Find/Makefile,v 1.10 2012/11/17 06:02:06 svnexp Exp $
#

PORTNAME=	NetAddr-IP-Find
PORTVERSION=	0.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Iterates over all IP addresses in a text similar to Email::Find

RUN_DEPENDS=	p5-NetAddr-IP>0:${PORTSDIR}/net-mgmt/p5-NetAddr-IP

PERL_CONFIGURE=	yes
INSTALL_TARGET=	pure_install

MAN3=		NetAddr::IP::Find.3

.include <bsd.port.mk>
