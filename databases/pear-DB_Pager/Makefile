# Created by: Toshiya Saitoh (<toshiya@saitoh.nu>)
# $FreeBSD: databases/pear-DB_Pager/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	DB_Pager
PORTVERSION=	0.7
CATEGORIES=	databases www pear

MAINTAINER=	toshiya@saitoh.nu
COMMENT=	PEAR Database Abstraction Layer

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
