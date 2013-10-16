# Created by: Christopher Boumenot <boumenot@gmail.com>
# $FreeBSD: devel/p5-Algorithm-Bucketizer/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Algorithm-Bucketizer
PORTVERSION=	0.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Distribute sized items to buckets with limited size

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Algorithm-Permute>=0:${PORTSDIR}/devel/p5-Algorithm-Permute \
		p5-Sysadm-Install>=0.23:${PORTSDIR}/sysutils/p5-Sysadm-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN1=		bucketize.1
MAN3=		Algorithm::Bucketizer.3

NO_STAGE=	yes
.include <bsd.port.mk>
