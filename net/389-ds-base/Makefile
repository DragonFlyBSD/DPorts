PORTNAME=	389-ds-base
DISTVERSION=	3.2.3
CATEGORIES=	net
MASTER_SITES=	https://github.com/389ds/389-ds-base/releases/download/${PORTNAME}-${DISTVERSION}/

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Enterprise-class LDAP directory server
WWW=		https://www.port389.org/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

USERS=		dirsrv
GROUPS=		dirsrv

BUILD_DEPENDS=	${LOCALBASE}/include/crypt.h:security/libxcrypt \
		cargo:lang/rust \
		rsync:net/rsync

LIB_DEPENDS=	libcrack.so:security/cracklib \
		libicui18n.so:devel/icu \
		libjson-c.so:devel/json-c \
		liblmdb.so:databases/lmdb0 \
		libnetsnmp.so:net-mgmt/net-snmp \
		libnspr4.so:devel/nspr \
		libnss3.so:security/nss \
		libpcre2-8.so:devel/pcre2 \
		libpkg.so:ports-mgmt/pkg \
		libsasl2.so:security/cyrus-sasl2

USES=		autoreconf cpe gmake gssapi:mit ldap libtool localbase:ldflags \
		perl5 pkgconfig python:3.12+ shebangfix ssl tar:bzip2
CPE_VENDOR=	fedoraproject
CPE_PRODUCT=	389_directory_server

USE_LDCONFIG=	${PREFIX}/lib ${PREFIX}/lib/dirsrv
USE_PERL5=	run

SHEBANG_FILES=	ldap/admin/src/logconv.pl ldap/admin/src/logconv.py \
		ldap/admin/src/scripts/ds-logpipe.py \
		ldap/admin/src/scripts/ds-replcheck \
		ldap/servers/slapd/mkDBErrStrs.py

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-dependency-tracking \
		--enable-rust-offline \
		--with-netsnmp=${LOCALBASE} \
		--with-openldap=${LOCALBASE} \
		--with-localrundir=/var/run \
		--with-pythonexec=${PYTHON_CMD}

MAKE_ENV=	CARGO_HOME=${WRKSRC}/.cargo \
		CARGO_NET_OFFLINE=true \
		PYTHON=${PYTHON_CMD}

LIBS+=		-lexecinfo

BINARY_ALIAS=	python3=${PYTHON_CMD}

CONFIGURE_ENV= LIBCRYPT=-lcrypt
LIB_DEPENDS+= libcrypt.so.2:security/libxcrypt
post-install:
	${MKDIR} ${STAGEDIR}/var/db/dirsrv \
		${STAGEDIR}/var/log/dirsrv

dfly-patch:
	${REINPLACE_CMD} -e 's/^  \*-\*-freebsd\*)/  *-*-freebsd*|*-*-dragonfly*)/' \
		-e 's/^    THREADLIB=-lthr$$/    THREADLIB=-lpthread/' \
		${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e '/^RUST_LDFLAGS = /s/ -lgcc_s / /' \
		${WRKSRC}/Makefile.am
	${REINPLACE_CMD} \
		-e 's/defined(__FreeBSD__)/(defined(__FreeBSD__) || defined(__DragonFly__))/g' \
		-e 's/^#ifdef __FreeBSD__/#if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#ifndef __FreeBSD__/#if !defined(__FreeBSD__) \&\& !defined(__DragonFly__)/' \
		-e 's/^#elif __FreeBSD__/#elif defined(__FreeBSD__) || defined(__DragonFly__)/' \
		${WRKSRC}/include/base/systems.h \
		${WRKSRC}/include/public/base/systems.h \
		${WRKSRC}/ldap/include/portable.h \
		${WRKSRC}/ldap/servers/slapd/back-ldbm/db-mdb/mdb_debug.c \
		${WRKSRC}/ldap/servers/slapd/daemon.c \
		${WRKSRC}/ldap/servers/slapd/getsocketpeer.c \
		${WRKSRC}/ldap/servers/slapd/ldaputil.c \
		${WRKSRC}/ldap/servers/slapd/localhost.c \
		${WRKSRC}/ldap/servers/slapd/main.c \
		${WRKSRC}/ldap/servers/slapd/slapi_pal.c \
		${WRKSRC}/ldap/servers/slapd/tools/pwenc.c \
		${WRKSRC}/lib/base/dnsdmain.cpp \
		${WRKSRC}/lib/base/file.cpp

.include <bsd.port.mk>
