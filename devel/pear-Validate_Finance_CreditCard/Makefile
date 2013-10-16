# Created by: Anish Mistry (<amistry@am-productions.biz>)
# $FreeBSD: devel/pear-Validate_Finance_CreditCard/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Validate_Finance_CreditCard
PORTVERSION=	0.5.3
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR CreditCard Validation class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
