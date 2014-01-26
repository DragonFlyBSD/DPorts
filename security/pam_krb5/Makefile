# Created by: nectar@FreeBSD.org
# $FreeBSD: security/pam_krb5/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=		pam_krb5
PORTVERSION=		4.6
CATEGORIES=		security
MASTER_SITES=		http://archives.eyrie.org/software/kerberos/ \
			http://archives.eyrie.org/software/ARCHIVE/pam-krb5/
DISTNAME=		pam-krb5-${PORTVERSION:S/.r/-rc/}

MAINTAINER=		cy@FreeBSD.org
COMMENT=		A Pluggable Authentication Module for Kerberos 5

CONFLICTS=		pam_krb5-rh-2.*

MAN5=			pam_krb5.5

USES=		perl5
GNU_CONFIGURE=		yes
USE_GMAKE=		yes

# Make DragonFly default to heimdal
# Source builder can override in make.conf or command line
KRB5_IMPL?= heimdal

.if defined(KRB5_IMPL) && ${KRB5_IMPL} == heimdal
LIB_DEPENDS+=		libkrb5.so:${PORTSDIR}/security/heimdal
.if defined(HEIMDAL_HOME)
KRB5_DIR?=		${HEIMDAL_HOME}
.endif
.elif defined(KRB5_IMPL) && ${KRB5_IMPL} == mit
LIB_DEPENDS=		krb5.3:${PORTSDIR}/security/krb5
.if defined(KRB5_HOME)
KRB5_DIR?=		${KRB5_HOME}
.endif
.else
IGNORE=			you must define KRB5_IMPL to be "mit" or "heimdal"
.endif

MANDIR=			${MANPREFIX}/man
MANDIR=			${PREFIX}/share/man
KRB5_DIR?=		${LOCALBASE}
CONFIGURE_ARGS=		--with-krb5="${KRB5_DIR}"

NO_STAGE=	yes
post-install:
	cd ${WRKSRC} && ${GMAKE} install-man

.include <bsd.port.mk>
