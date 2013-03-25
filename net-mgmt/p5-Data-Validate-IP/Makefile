# Created by: Tuc <freebsd-ports@t-b-o-h.net>
# $FreeBSD: net-mgmt/p5-Data-Validate-IP/Makefile 314056 2013-03-13 10:50:51Z bapt $

PORTNAME=	Data-Validate-IP
PORTVERSION=	0.14
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NEELY
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd-ports@t-b-o-h.net
COMMENT=	Common data validation methods for IPs

BUILD_DEPENDS=	p5-Net-Netmask>=0:${PORTSDIR}/net-mgmt/p5-Net-Netmask
RUN_DEPENDS=	p5-Net-Netmask>=0:${PORTSDIR}/net-mgmt/p5-Net-Netmask

PERL_CONFIGURE=	yes

MAN3=	Data::Validate::IP.3

.include <bsd.port.mk>
