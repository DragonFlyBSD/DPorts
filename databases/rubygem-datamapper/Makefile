# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: databases/rubygem-datamapper/Makefile 332031 2013-10-30 02:20:20Z swills $

PORTNAME=	datamapper
PORTVERSION=	1.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast, thread-safe, object-relational mapper

RUN_DEPENDS=	rubygem-dm-aggregates>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-aggregates \
	rubygem-dm-constraints>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-constraints \
	rubygem-dm-transactions>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-transactions \
	rubygem-dm-serializer>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-serializer \
	rubygem-dm-timestamps>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-timestamps \
	rubygem-dm-validations>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-validations \
	rubygem-dm-types>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-types

USE_RUBY=	yes
USE_RUBYGEMS=	yes
USE_RAKE=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
